/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disablessoresponse.h"
#include "disablessoresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DisableSsoResponse
 * \brief The DisableSsoResponse class provides an interace for DirectoryService DisableSso responses.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::disableSso
 */

/*!
 * Constructs a DisableSsoResponse object for \a reply to \a request, with parent \a parent.
 */
DisableSsoResponse::DisableSsoResponse(
        const DisableSsoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DisableSsoResponsePrivate(this), parent)
{
    setRequest(new DisableSsoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableSsoRequest * DisableSsoResponse::request() const
{
    Q_D(const DisableSsoResponse);
    return static_cast<const DisableSsoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService DisableSso \a response.
 */
void DisableSsoResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableSsoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::DisableSsoResponsePrivate
 * \brief The DisableSsoResponsePrivate class provides private implementation for DisableSsoResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DisableSsoResponsePrivate object with public implementation \a q.
 */
DisableSsoResponsePrivate::DisableSsoResponsePrivate(
    DisableSsoResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService DisableSso response element from \a xml.
 */
void DisableSsoResponsePrivate::parseDisableSsoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableSsoResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws

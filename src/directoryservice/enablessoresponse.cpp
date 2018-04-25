/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "enablessoresponse.h"
#include "enablessoresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::EnableSsoResponse
 * \brief The EnableSsoResponse class provides an interace for DirectoryService EnableSso responses.
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
 * \sa DirectoryServiceClient::enableSso
 */

/*!
 * Constructs a EnableSsoResponse object for \a reply to \a request, with parent \a parent.
 */
EnableSsoResponse::EnableSsoResponse(
        const EnableSsoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new EnableSsoResponsePrivate(this), parent)
{
    setRequest(new EnableSsoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableSsoRequest * EnableSsoResponse::request() const
{
    Q_D(const EnableSsoResponse);
    return static_cast<const EnableSsoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService EnableSso \a response.
 */
void EnableSsoResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableSsoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::EnableSsoResponsePrivate
 * \brief The EnableSsoResponsePrivate class provides private implementation for EnableSsoResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a EnableSsoResponsePrivate object with public implementation \a q.
 */
EnableSsoResponsePrivate::EnableSsoResponsePrivate(
    EnableSsoResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService EnableSso response element from \a xml.
 */
void EnableSsoResponsePrivate::parseEnableSsoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableSsoResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws

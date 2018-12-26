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

#include "acceptshareddirectoryresponse.h"
#include "acceptshareddirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::AcceptSharedDirectoryResponse
 * \brief The AcceptSharedDirectoryResponse class provides an interace for DirectoryService AcceptSharedDirectory responses.
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
 * \sa DirectoryServiceClient::acceptSharedDirectory
 */

/*!
 * Constructs a AcceptSharedDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptSharedDirectoryResponse::AcceptSharedDirectoryResponse(
        const AcceptSharedDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new AcceptSharedDirectoryResponsePrivate(this), parent)
{
    setRequest(new AcceptSharedDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptSharedDirectoryRequest * AcceptSharedDirectoryResponse::request() const
{
    Q_D(const AcceptSharedDirectoryResponse);
    return static_cast<const AcceptSharedDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService AcceptSharedDirectory \a response.
 */
void AcceptSharedDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptSharedDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::AcceptSharedDirectoryResponsePrivate
 * \brief The AcceptSharedDirectoryResponsePrivate class provides private implementation for AcceptSharedDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a AcceptSharedDirectoryResponsePrivate object with public implementation \a q.
 */
AcceptSharedDirectoryResponsePrivate::AcceptSharedDirectoryResponsePrivate(
    AcceptSharedDirectoryResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService AcceptSharedDirectory response element from \a xml.
 */
void AcceptSharedDirectoryResponsePrivate::parseAcceptSharedDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptSharedDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

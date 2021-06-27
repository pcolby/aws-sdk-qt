/*
    Copyright 2013-2021 Paul Colby

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

#include "deleteconditionalforwarderresponse.h"
#include "deleteconditionalforwarderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DeleteConditionalForwarderResponse
 * \brief The DeleteConditionalForwarderResponse class provides an interace for DirectoryService DeleteConditionalForwarder responses.
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
 * \sa DirectoryServiceClient::deleteConditionalForwarder
 */

/*!
 * Constructs a DeleteConditionalForwarderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConditionalForwarderResponse::DeleteConditionalForwarderResponse(
        const DeleteConditionalForwarderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteConditionalForwarderResponsePrivate(this), parent)
{
    setRequest(new DeleteConditionalForwarderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConditionalForwarderRequest * DeleteConditionalForwarderResponse::request() const
{
    return static_cast<const DeleteConditionalForwarderRequest *>(DirectoryServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful DirectoryService DeleteConditionalForwarder \a response.
 */
void DeleteConditionalForwarderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConditionalForwarderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::DeleteConditionalForwarderResponsePrivate
 * \brief The DeleteConditionalForwarderResponsePrivate class provides private implementation for DeleteConditionalForwarderResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DeleteConditionalForwarderResponsePrivate object with public implementation \a q.
 */
DeleteConditionalForwarderResponsePrivate::DeleteConditionalForwarderResponsePrivate(
    DeleteConditionalForwarderResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService DeleteConditionalForwarder response element from \a xml.
 */
void DeleteConditionalForwarderResponsePrivate::parseDeleteConditionalForwarderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConditionalForwarderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

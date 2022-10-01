// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemaextensionsresponse.h"
#include "listschemaextensionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::ListSchemaExtensionsResponse
 * \brief The ListSchemaExtensionsResponse class provides an interace for DirectoryService ListSchemaExtensions responses.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>Directory Service</fullname>
 * 
 *  Directory Service is a web service that makes it easy for you to setup and run directories in the Amazon Web Services
 *  cloud, or connect your Amazon Web Services resources with an existing self-managed Microsoft Active Directory. This
 *  guide provides detailed information about Directory Service operations, data types, parameters, and errors. For
 *  information about Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">Directory
 *  Service</a> and the <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
 *  Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  Directory Service and other Amazon Web Services services. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::listSchemaExtensions
 */

/*!
 * Constructs a ListSchemaExtensionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemaExtensionsResponse::ListSchemaExtensionsResponse(
        const ListSchemaExtensionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new ListSchemaExtensionsResponsePrivate(this), parent)
{
    setRequest(new ListSchemaExtensionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchemaExtensionsRequest * ListSchemaExtensionsResponse::request() const
{
    Q_D(const ListSchemaExtensionsResponse);
    return static_cast<const ListSchemaExtensionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService ListSchemaExtensions \a response.
 */
void ListSchemaExtensionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemaExtensionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::ListSchemaExtensionsResponsePrivate
 * \brief The ListSchemaExtensionsResponsePrivate class provides private implementation for ListSchemaExtensionsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a ListSchemaExtensionsResponsePrivate object with public implementation \a q.
 */
ListSchemaExtensionsResponsePrivate::ListSchemaExtensionsResponsePrivate(
    ListSchemaExtensionsResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService ListSchemaExtensions response element from \a xml.
 */
void ListSchemaExtensionsResponsePrivate::parseListSchemaExtensionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemaExtensionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcertificatesresponse.h"
#include "listcertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::ListCertificatesResponse
 * \brief The ListCertificatesResponse class provides an interace for DirectoryService ListCertificates responses.
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
 * \sa DirectoryServiceClient::listCertificates
 */

/*!
 * Constructs a ListCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCertificatesResponse::ListCertificatesResponse(
        const ListCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new ListCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCertificatesRequest * ListCertificatesResponse::request() const
{
    Q_D(const ListCertificatesResponse);
    return static_cast<const ListCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService ListCertificates \a response.
 */
void ListCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::ListCertificatesResponsePrivate
 * \brief The ListCertificatesResponsePrivate class provides private implementation for ListCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a ListCertificatesResponsePrivate object with public implementation \a q.
 */
ListCertificatesResponsePrivate::ListCertificatesResponsePrivate(
    ListCertificatesResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService ListCertificates response element from \a xml.
 */
void ListCertificatesResponsePrivate::parseListCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

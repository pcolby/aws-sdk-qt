// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrustresponse.h"
#include "deletetrustresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DeleteTrustResponse
 * \brief The DeleteTrustResponse class provides an interace for DirectoryService DeleteTrust responses.
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
 * \sa DirectoryServiceClient::deleteTrust
 */

/*!
 * Constructs a DeleteTrustResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrustResponse::DeleteTrustResponse(
        const DeleteTrustRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteTrustResponsePrivate(this), parent)
{
    setRequest(new DeleteTrustRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrustRequest * DeleteTrustResponse::request() const
{
    Q_D(const DeleteTrustResponse);
    return static_cast<const DeleteTrustRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService DeleteTrust \a response.
 */
void DeleteTrustResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrustResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::DeleteTrustResponsePrivate
 * \brief The DeleteTrustResponsePrivate class provides private implementation for DeleteTrustResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DeleteTrustResponsePrivate object with public implementation \a q.
 */
DeleteTrustResponsePrivate::DeleteTrustResponsePrivate(
    DeleteTrustResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService DeleteTrust response element from \a xml.
 */
void DeleteTrustResponsePrivate::parseDeleteTrustResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrustResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

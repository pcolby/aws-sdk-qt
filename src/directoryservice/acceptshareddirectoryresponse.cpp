// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

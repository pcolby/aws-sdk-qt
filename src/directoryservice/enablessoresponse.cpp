// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(EnableSsoResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

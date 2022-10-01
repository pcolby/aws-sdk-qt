// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlogsubscriptionresponse.h"
#include "createlogsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::CreateLogSubscriptionResponse
 * \brief The CreateLogSubscriptionResponse class provides an interace for DirectoryService CreateLogSubscription responses.
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
 * \sa DirectoryServiceClient::createLogSubscription
 */

/*!
 * Constructs a CreateLogSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLogSubscriptionResponse::CreateLogSubscriptionResponse(
        const CreateLogSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateLogSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateLogSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLogSubscriptionRequest * CreateLogSubscriptionResponse::request() const
{
    Q_D(const CreateLogSubscriptionResponse);
    return static_cast<const CreateLogSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService CreateLogSubscription \a response.
 */
void CreateLogSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLogSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::CreateLogSubscriptionResponsePrivate
 * \brief The CreateLogSubscriptionResponsePrivate class provides private implementation for CreateLogSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a CreateLogSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateLogSubscriptionResponsePrivate::CreateLogSubscriptionResponsePrivate(
    CreateLogSubscriptionResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService CreateLogSubscription response element from \a xml.
 */
void CreateLogSubscriptionResponsePrivate::parseCreateLogSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLogSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsecretsresponse.h"
#include "listsecretsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::ListSecretsResponse
 * \brief The ListSecretsResponse class provides an interace for SecretsManager ListSecrets responses.
 *
 * \inmodule QtAwsSecretsManager
 *
 *  <fullname>Amazon Web Services Secrets Manager</fullname>
 * 
 *  Amazon Web Services Secrets Manager provides a service to enable you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">Amazon Web Services Secrets Manager
 *  User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17>
 * 
 *  <b>Support and Feedback for Amazon Web Services Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">Amazon Web Services Secrets Manager
 *  Discussion Forum</a>. For more information about the Amazon Web Services Discussion Forums, see <a
 *  href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  Amazon Web Services Secrets Manager supports Amazon Web Services CloudTrail, a service that records Amazon Web Services
 *  API calls for your Amazon Web Services account and delivers log files to an Amazon S3 bucket. By using information
 *  that's collected by Amazon Web Services CloudTrail, you can determine the requests successfully made to Secrets Manager,
 *  who made the request, when it was made, and so on. For more about Amazon Web Services Secrets Manager and support for
 *  Amazon Web Services CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging Amazon
 *  Web Services Secrets Manager Events with Amazon Web Services CloudTrail</a> in the <i>Amazon Web Services Secrets
 *  Manager User Guide</i>. To learn more about CloudTrail, including enabling it and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">Amazon Web Services
 *  CloudTrail User
 *
 * \sa SecretsManagerClient::listSecrets
 */

/*!
 * Constructs a ListSecretsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSecretsResponse::ListSecretsResponse(
        const ListSecretsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new ListSecretsResponsePrivate(this), parent)
{
    setRequest(new ListSecretsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSecretsRequest * ListSecretsResponse::request() const
{
    Q_D(const ListSecretsResponse);
    return static_cast<const ListSecretsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecretsManager ListSecrets \a response.
 */
void ListSecretsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSecretsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecretsManager::ListSecretsResponsePrivate
 * \brief The ListSecretsResponsePrivate class provides private implementation for ListSecretsResponse.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a ListSecretsResponsePrivate object with public implementation \a q.
 */
ListSecretsResponsePrivate::ListSecretsResponsePrivate(
    ListSecretsResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/*!
 * Parses a SecretsManager ListSecrets response element from \a xml.
 */
void ListSecretsResponsePrivate::parseListSecretsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecretsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecretsManager
} // namespace QtAws

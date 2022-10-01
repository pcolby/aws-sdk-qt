// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removemanagedscalingpolicyresponse.h"
#include "removemanagedscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RemoveManagedScalingPolicyResponse
 * \brief The RemoveManagedScalingPolicyResponse class provides an interace for Emr RemoveManagedScalingPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::removeManagedScalingPolicy
 */

/*!
 * Constructs a RemoveManagedScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveManagedScalingPolicyResponse::RemoveManagedScalingPolicyResponse(
        const RemoveManagedScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new RemoveManagedScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new RemoveManagedScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveManagedScalingPolicyRequest * RemoveManagedScalingPolicyResponse::request() const
{
    Q_D(const RemoveManagedScalingPolicyResponse);
    return static_cast<const RemoveManagedScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr RemoveManagedScalingPolicy \a response.
 */
void RemoveManagedScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveManagedScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::RemoveManagedScalingPolicyResponsePrivate
 * \brief The RemoveManagedScalingPolicyResponsePrivate class provides private implementation for RemoveManagedScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RemoveManagedScalingPolicyResponsePrivate object with public implementation \a q.
 */
RemoveManagedScalingPolicyResponsePrivate::RemoveManagedScalingPolicyResponsePrivate(
    RemoveManagedScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr RemoveManagedScalingPolicy response element from \a xml.
 */
void RemoveManagedScalingPolicyResponsePrivate::parseRemoveManagedScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveManagedScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

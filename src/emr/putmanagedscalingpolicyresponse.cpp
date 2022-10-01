// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmanagedscalingpolicyresponse.h"
#include "putmanagedscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutManagedScalingPolicyResponse
 * \brief The PutManagedScalingPolicyResponse class provides an interace for Emr PutManagedScalingPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putManagedScalingPolicy
 */

/*!
 * Constructs a PutManagedScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutManagedScalingPolicyResponse::PutManagedScalingPolicyResponse(
        const PutManagedScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new PutManagedScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new PutManagedScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutManagedScalingPolicyRequest * PutManagedScalingPolicyResponse::request() const
{
    Q_D(const PutManagedScalingPolicyResponse);
    return static_cast<const PutManagedScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr PutManagedScalingPolicy \a response.
 */
void PutManagedScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutManagedScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::PutManagedScalingPolicyResponsePrivate
 * \brief The PutManagedScalingPolicyResponsePrivate class provides private implementation for PutManagedScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutManagedScalingPolicyResponsePrivate object with public implementation \a q.
 */
PutManagedScalingPolicyResponsePrivate::PutManagedScalingPolicyResponsePrivate(
    PutManagedScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr PutManagedScalingPolicy response element from \a xml.
 */
void PutManagedScalingPolicyResponsePrivate::parsePutManagedScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutManagedScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmetricpolicyresponse.h"
#include "putmetricpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutMetricPolicyResponse
 * \brief The PutMetricPolicyResponse class provides an interace for MediaStore PutMetricPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putMetricPolicy
 */

/*!
 * Constructs a PutMetricPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutMetricPolicyResponse::PutMetricPolicyResponse(
        const PutMetricPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new PutMetricPolicyResponsePrivate(this), parent)
{
    setRequest(new PutMetricPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMetricPolicyRequest * PutMetricPolicyResponse::request() const
{
    Q_D(const PutMetricPolicyResponse);
    return static_cast<const PutMetricPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore PutMetricPolicy \a response.
 */
void PutMetricPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMetricPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::PutMetricPolicyResponsePrivate
 * \brief The PutMetricPolicyResponsePrivate class provides private implementation for PutMetricPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutMetricPolicyResponsePrivate object with public implementation \a q.
 */
PutMetricPolicyResponsePrivate::PutMetricPolicyResponsePrivate(
    PutMetricPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore PutMetricPolicy response element from \a xml.
 */
void PutMetricPolicyResponsePrivate::parsePutMetricPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMetricPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws

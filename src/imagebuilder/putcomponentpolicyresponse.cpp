// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcomponentpolicyresponse.h"
#include "putcomponentpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutComponentPolicyResponse
 * \brief The PutComponentPolicyResponse class provides an interace for ImageBuilder PutComponentPolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putComponentPolicy
 */

/*!
 * Constructs a PutComponentPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutComponentPolicyResponse::PutComponentPolicyResponse(
        const PutComponentPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new PutComponentPolicyResponsePrivate(this), parent)
{
    setRequest(new PutComponentPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutComponentPolicyRequest * PutComponentPolicyResponse::request() const
{
    Q_D(const PutComponentPolicyResponse);
    return static_cast<const PutComponentPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder PutComponentPolicy \a response.
 */
void PutComponentPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutComponentPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::PutComponentPolicyResponsePrivate
 * \brief The PutComponentPolicyResponsePrivate class provides private implementation for PutComponentPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutComponentPolicyResponsePrivate object with public implementation \a q.
 */
PutComponentPolicyResponsePrivate::PutComponentPolicyResponsePrivate(
    PutComponentPolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder PutComponentPolicy response element from \a xml.
 */
void PutComponentPolicyResponsePrivate::parsePutComponentPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutComponentPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws

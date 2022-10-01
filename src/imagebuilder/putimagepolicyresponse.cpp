// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagepolicyresponse.h"
#include "putimagepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutImagePolicyResponse
 * \brief The PutImagePolicyResponse class provides an interace for ImageBuilder PutImagePolicy responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putImagePolicy
 */

/*!
 * Constructs a PutImagePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutImagePolicyResponse::PutImagePolicyResponse(
        const PutImagePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new PutImagePolicyResponsePrivate(this), parent)
{
    setRequest(new PutImagePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImagePolicyRequest * PutImagePolicyResponse::request() const
{
    Q_D(const PutImagePolicyResponse);
    return static_cast<const PutImagePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder PutImagePolicy \a response.
 */
void PutImagePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImagePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::PutImagePolicyResponsePrivate
 * \brief The PutImagePolicyResponsePrivate class provides private implementation for PutImagePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutImagePolicyResponsePrivate object with public implementation \a q.
 */
PutImagePolicyResponsePrivate::PutImagePolicyResponsePrivate(
    PutImagePolicyResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder PutImagePolicy response element from \a xml.
 */
void PutImagePolicyResponsePrivate::parsePutImagePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImagePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws

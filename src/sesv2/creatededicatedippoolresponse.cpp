// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatededicatedippoolresponse.h"
#include "creatededicatedippoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateDedicatedIpPoolResponse
 * \brief The CreateDedicatedIpPoolResponse class provides an interace for SESv2 CreateDedicatedIpPool responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::createDedicatedIpPool
 */

/*!
 * Constructs a CreateDedicatedIpPoolResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDedicatedIpPoolResponse::CreateDedicatedIpPoolResponse(
        const CreateDedicatedIpPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateDedicatedIpPoolResponsePrivate(this), parent)
{
    setRequest(new CreateDedicatedIpPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDedicatedIpPoolRequest * CreateDedicatedIpPoolResponse::request() const
{
    Q_D(const CreateDedicatedIpPoolResponse);
    return static_cast<const CreateDedicatedIpPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateDedicatedIpPool \a response.
 */
void CreateDedicatedIpPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDedicatedIpPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateDedicatedIpPoolResponsePrivate
 * \brief The CreateDedicatedIpPoolResponsePrivate class provides private implementation for CreateDedicatedIpPoolResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateDedicatedIpPoolResponsePrivate object with public implementation \a q.
 */
CreateDedicatedIpPoolResponsePrivate::CreateDedicatedIpPoolResponsePrivate(
    CreateDedicatedIpPoolResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateDedicatedIpPool response element from \a xml.
 */
void CreateDedicatedIpPoolResponsePrivate::parseCreateDedicatedIpPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDedicatedIpPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws

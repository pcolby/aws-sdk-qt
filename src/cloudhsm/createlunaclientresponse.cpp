// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlunaclientresponse.h"
#include "createlunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CreateLunaClientResponse
 * \brief The CreateLunaClientResponse class provides an interace for CloudHsm CreateLunaClient responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::createLunaClient
 */

/*!
 * Constructs a CreateLunaClientResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLunaClientResponse::CreateLunaClientResponse(
        const CreateLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new CreateLunaClientResponsePrivate(this), parent)
{
    setRequest(new CreateLunaClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLunaClientRequest * CreateLunaClientResponse::request() const
{
    Q_D(const CreateLunaClientResponse);
    return static_cast<const CreateLunaClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm CreateLunaClient \a response.
 */
void CreateLunaClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::CreateLunaClientResponsePrivate
 * \brief The CreateLunaClientResponsePrivate class provides private implementation for CreateLunaClientResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CreateLunaClientResponsePrivate object with public implementation \a q.
 */
CreateLunaClientResponsePrivate::CreateLunaClientResponsePrivate(
    CreateLunaClientResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm CreateLunaClient response element from \a xml.
 */
void CreateLunaClientResponsePrivate::parseCreateLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLunaClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws

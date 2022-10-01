// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhapgresponse.h"
#include "createhapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CreateHapgResponse
 * \brief The CreateHapgResponse class provides an interace for CloudHsm CreateHapg responses.
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
 * \sa CloudHsmClient::createHapg
 */

/*!
 * Constructs a CreateHapgResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHapgResponse::CreateHapgResponse(
        const CreateHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new CreateHapgResponsePrivate(this), parent)
{
    setRequest(new CreateHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHapgRequest * CreateHapgResponse::request() const
{
    Q_D(const CreateHapgResponse);
    return static_cast<const CreateHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm CreateHapg \a response.
 */
void CreateHapgResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::CreateHapgResponsePrivate
 * \brief The CreateHapgResponsePrivate class provides private implementation for CreateHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CreateHapgResponsePrivate object with public implementation \a q.
 */
CreateHapgResponsePrivate::CreateHapgResponsePrivate(
    CreateHapgResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm CreateHapg response element from \a xml.
 */
void CreateHapgResponsePrivate::parseCreateHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHapgResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws

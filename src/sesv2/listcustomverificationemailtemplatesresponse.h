// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESRESPONSE_H
#define QTAWS_LISTCUSTOMVERIFICATIONEMAILTEMPLATESRESPONSE_H

#include "sesv2response.h"
#include "listcustomverificationemailtemplatesrequest.h"

namespace QtAws {
namespace SESv2 {

class ListCustomVerificationEmailTemplatesResponsePrivate;

class QTAWSSESV2_EXPORT ListCustomVerificationEmailTemplatesResponse : public SESv2Response {
    Q_OBJECT

public:
    ListCustomVerificationEmailTemplatesResponse(const ListCustomVerificationEmailTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomVerificationEmailTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomVerificationEmailTemplatesResponse)
    Q_DISABLE_COPY(ListCustomVerificationEmailTemplatesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

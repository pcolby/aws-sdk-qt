// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATERESPONSE_H
#define QTAWS_DELETEEMAILTEMPLATERESPONSE_H

#include "sesv2response.h"
#include "deleteemailtemplaterequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailTemplateResponsePrivate;

class QTAWSSESV2_EXPORT DeleteEmailTemplateResponse : public SESv2Response {
    Q_OBJECT

public:
    DeleteEmailTemplateResponse(const DeleteEmailTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEmailTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailTemplateResponse)
    Q_DISABLE_COPY(DeleteEmailTemplateResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif

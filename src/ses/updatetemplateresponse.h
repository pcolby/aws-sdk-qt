// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATERESPONSE_H
#define QTAWS_UPDATETEMPLATERESPONSE_H

#include "sesresponse.h"
#include "updatetemplaterequest.h"

namespace QtAws {
namespace Ses {

class UpdateTemplateResponsePrivate;

class QTAWSSES_EXPORT UpdateTemplateResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateTemplateResponse(const UpdateTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateResponse)
    Q_DISABLE_COPY(UpdateTemplateResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATERESPONSE_H
#define QTAWS_DELETETEMPLATERESPONSE_H

#include "sesresponse.h"
#include "deletetemplaterequest.h"

namespace QtAws {
namespace Ses {

class DeleteTemplateResponsePrivate;

class QTAWSSES_EXPORT DeleteTemplateResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteTemplateResponse(const DeleteTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTemplateResponse)
    Q_DISABLE_COPY(DeleteTemplateResponse)

};

} // namespace Ses
} // namespace QtAws

#endif

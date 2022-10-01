// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATERESPONSE_H
#define QTAWS_CREATETEMPLATERESPONSE_H

#include "quicksightresponse.h"
#include "createtemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateTemplateResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateTemplateResponse(const CreateTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTemplateResponse)
    Q_DISABLE_COPY(CreateTemplateResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif

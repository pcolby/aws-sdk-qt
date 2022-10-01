// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBTEMPLATERESPONSE_H
#define QTAWS_UPDATEJOBTEMPLATERESPONSE_H

#include "mediaconvertresponse.h"
#include "updatejobtemplaterequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdateJobTemplateResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT UpdateJobTemplateResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    UpdateJobTemplateResponse(const UpdateJobTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJobTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobTemplateResponse)
    Q_DISABLE_COPY(UpdateJobTemplateResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

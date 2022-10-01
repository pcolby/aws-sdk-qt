// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTEMPLATERESPONSE_H
#define QTAWS_GETJOBTEMPLATERESPONSE_H

#include "mediaconvertresponse.h"
#include "getjobtemplaterequest.h"

namespace QtAws {
namespace MediaConvert {

class GetJobTemplateResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT GetJobTemplateResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    GetJobTemplateResponse(const GetJobTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobTemplateResponse)
    Q_DISABLE_COPY(GetJobTemplateResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif

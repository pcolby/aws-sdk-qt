// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATERESPONSE_H
#define QTAWS_DELETETEMPLATERESPONSE_H

#include "quicksightresponse.h"
#include "deletetemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteTemplateResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteTemplateResponse : public QuickSightResponse {
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

} // namespace QuickSight
} // namespace QtAws

#endif

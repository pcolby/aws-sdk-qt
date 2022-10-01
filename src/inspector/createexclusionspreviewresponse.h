// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXCLUSIONSPREVIEWRESPONSE_H
#define QTAWS_CREATEEXCLUSIONSPREVIEWRESPONSE_H

#include "inspectorresponse.h"
#include "createexclusionspreviewrequest.h"

namespace QtAws {
namespace Inspector {

class CreateExclusionsPreviewResponsePrivate;

class QTAWSINSPECTOR_EXPORT CreateExclusionsPreviewResponse : public InspectorResponse {
    Q_OBJECT

public:
    CreateExclusionsPreviewResponse(const CreateExclusionsPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExclusionsPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExclusionsPreviewResponse)
    Q_DISABLE_COPY(CreateExclusionsPreviewResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXCLUSIONSPREVIEWRESPONSE_H
#define QTAWS_GETEXCLUSIONSPREVIEWRESPONSE_H

#include "inspectorresponse.h"
#include "getexclusionspreviewrequest.h"

namespace QtAws {
namespace Inspector {

class GetExclusionsPreviewResponsePrivate;

class QTAWSINSPECTOR_EXPORT GetExclusionsPreviewResponse : public InspectorResponse {
    Q_OBJECT

public:
    GetExclusionsPreviewResponse(const GetExclusionsPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExclusionsPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExclusionsPreviewResponse)
    Q_DISABLE_COPY(GetExclusionsPreviewResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

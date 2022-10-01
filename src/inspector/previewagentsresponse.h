// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREVIEWAGENTSRESPONSE_H
#define QTAWS_PREVIEWAGENTSRESPONSE_H

#include "inspectorresponse.h"
#include "previewagentsrequest.h"

namespace QtAws {
namespace Inspector {

class PreviewAgentsResponsePrivate;

class QTAWSINSPECTOR_EXPORT PreviewAgentsResponse : public InspectorResponse {
    Q_OBJECT

public:
    PreviewAgentsResponse(const PreviewAgentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PreviewAgentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PreviewAgentsResponse)
    Q_DISABLE_COPY(PreviewAgentsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

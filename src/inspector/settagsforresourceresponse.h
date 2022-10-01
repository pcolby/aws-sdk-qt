// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTAGSFORRESOURCERESPONSE_H
#define QTAWS_SETTAGSFORRESOURCERESPONSE_H

#include "inspectorresponse.h"
#include "settagsforresourcerequest.h"

namespace QtAws {
namespace Inspector {

class SetTagsForResourceResponsePrivate;

class QTAWSINSPECTOR_EXPORT SetTagsForResourceResponse : public InspectorResponse {
    Q_OBJECT

public:
    SetTagsForResourceResponse(const SetTagsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTagsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTagsForResourceResponse)
    Q_DISABLE_COPY(SetTagsForResourceResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

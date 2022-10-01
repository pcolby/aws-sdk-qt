// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESFROMFINDINGSRESPONSE_H
#define QTAWS_REMOVEATTRIBUTESFROMFINDINGSRESPONSE_H

#include "inspectorresponse.h"
#include "removeattributesfromfindingsrequest.h"

namespace QtAws {
namespace Inspector {

class RemoveAttributesFromFindingsResponsePrivate;

class QTAWSINSPECTOR_EXPORT RemoveAttributesFromFindingsResponse : public InspectorResponse {
    Q_OBJECT

public:
    RemoveAttributesFromFindingsResponse(const RemoveAttributesFromFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAttributesFromFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAttributesFromFindingsResponse)
    Q_DISABLE_COPY(RemoveAttributesFromFindingsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

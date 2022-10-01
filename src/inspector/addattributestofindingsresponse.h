// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTRIBUTESTOFINDINGSRESPONSE_H
#define QTAWS_ADDATTRIBUTESTOFINDINGSRESPONSE_H

#include "inspectorresponse.h"
#include "addattributestofindingsrequest.h"

namespace QtAws {
namespace Inspector {

class AddAttributesToFindingsResponsePrivate;

class QTAWSINSPECTOR_EXPORT AddAttributesToFindingsResponse : public InspectorResponse {
    Q_OBJECT

public:
    AddAttributesToFindingsResponse(const AddAttributesToFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddAttributesToFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddAttributesToFindingsResponse)
    Q_DISABLE_COPY(AddAttributesToFindingsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif

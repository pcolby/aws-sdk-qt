// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDATARETRIEVALPOLICYRESPONSE_H
#define QTAWS_SETDATARETRIEVALPOLICYRESPONSE_H

#include "glacierresponse.h"
#include "setdataretrievalpolicyrequest.h"

namespace QtAws {
namespace Glacier {

class SetDataRetrievalPolicyResponsePrivate;

class QTAWSGLACIER_EXPORT SetDataRetrievalPolicyResponse : public GlacierResponse {
    Q_OBJECT

public:
    SetDataRetrievalPolicyResponse(const SetDataRetrievalPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDataRetrievalPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDataRetrievalPolicyResponse)
    Q_DISABLE_COPY(SetDataRetrievalPolicyResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif

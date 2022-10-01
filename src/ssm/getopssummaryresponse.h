// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSSUMMARYRESPONSE_H
#define QTAWS_GETOPSSUMMARYRESPONSE_H

#include "ssmresponse.h"
#include "getopssummaryrequest.h"

namespace QtAws {
namespace Ssm {

class GetOpsSummaryResponsePrivate;

class QTAWSSSM_EXPORT GetOpsSummaryResponse : public SsmResponse {
    Q_OBJECT

public:
    GetOpsSummaryResponse(const GetOpsSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOpsSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpsSummaryResponse)
    Q_DISABLE_COPY(GetOpsSummaryResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif

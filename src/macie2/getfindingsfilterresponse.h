// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSFILTERRESPONSE_H
#define QTAWS_GETFINDINGSFILTERRESPONSE_H

#include "macie2response.h"
#include "getfindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsFilterResponsePrivate;

class QTAWSMACIE2_EXPORT GetFindingsFilterResponse : public Macie2Response {
    Q_OBJECT

public:
    GetFindingsFilterResponse(const GetFindingsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsFilterResponse)
    Q_DISABLE_COPY(GetFindingsFilterResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

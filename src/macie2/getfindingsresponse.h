// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSRESPONSE_H
#define QTAWS_GETFINDINGSRESPONSE_H

#include "macie2response.h"
#include "getfindingsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsResponsePrivate;

class QTAWSMACIE2_EXPORT GetFindingsResponse : public Macie2Response {
    Q_OBJECT

public:
    GetFindingsResponse(const GetFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

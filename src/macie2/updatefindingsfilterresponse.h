// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFILTERRESPONSE_H
#define QTAWS_UPDATEFINDINGSFILTERRESPONSE_H

#include "macie2response.h"
#include "updatefindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateFindingsFilterResponsePrivate;

class QTAWSMACIE2_EXPORT UpdateFindingsFilterResponse : public Macie2Response {
    Q_OBJECT

public:
    UpdateFindingsFilterResponse(const UpdateFindingsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFindingsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingsFilterResponse)
    Q_DISABLE_COPY(UpdateFindingsFilterResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

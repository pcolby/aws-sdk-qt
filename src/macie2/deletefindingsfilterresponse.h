// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGSFILTERRESPONSE_H
#define QTAWS_DELETEFINDINGSFILTERRESPONSE_H

#include "macie2response.h"
#include "deletefindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteFindingsFilterResponsePrivate;

class QTAWSMACIE2_EXPORT DeleteFindingsFilterResponse : public Macie2Response {
    Q_OBJECT

public:
    DeleteFindingsFilterResponse(const DeleteFindingsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFindingsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFindingsFilterResponse)
    Q_DISABLE_COPY(DeleteFindingsFilterResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSFILTERRESPONSE_H
#define QTAWS_CREATEFINDINGSFILTERRESPONSE_H

#include "macie2response.h"
#include "createfindingsfilterrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateFindingsFilterResponsePrivate;

class QTAWSMACIE2_EXPORT CreateFindingsFilterResponse : public Macie2Response {
    Q_OBJECT

public:
    CreateFindingsFilterResponse(const CreateFindingsFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFindingsFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFindingsFilterResponse)
    Q_DISABLE_COPY(CreateFindingsFilterResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

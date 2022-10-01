// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMDATAIDENTIFIERRESPONSE_H
#define QTAWS_GETCUSTOMDATAIDENTIFIERRESPONSE_H

#include "macie2response.h"
#include "getcustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class GetCustomDataIdentifierResponsePrivate;

class QTAWSMACIE2_EXPORT GetCustomDataIdentifierResponse : public Macie2Response {
    Q_OBJECT

public:
    GetCustomDataIdentifierResponse(const GetCustomDataIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCustomDataIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomDataIdentifierResponse)
    Q_DISABLE_COPY(GetCustomDataIdentifierResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESRESPONSE_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESRESPONSE_H

#include "macie2response.h"
#include "getsensitivedataoccurrencesrequest.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesResponsePrivate;

class QTAWSMACIE2_EXPORT GetSensitiveDataOccurrencesResponse : public Macie2Response {
    Q_OBJECT

public:
    GetSensitiveDataOccurrencesResponse(const GetSensitiveDataOccurrencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSensitiveDataOccurrencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSensitiveDataOccurrencesResponse)
    Q_DISABLE_COPY(GetSensitiveDataOccurrencesResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

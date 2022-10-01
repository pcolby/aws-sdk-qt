// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYRESPONSE_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYRESPONSE_H

#include "macie2response.h"
#include "getsensitivedataoccurrencesavailabilityrequest.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesAvailabilityResponsePrivate;

class QTAWSMACIE2_EXPORT GetSensitiveDataOccurrencesAvailabilityResponse : public Macie2Response {
    Q_OBJECT

public:
    GetSensitiveDataOccurrencesAvailabilityResponse(const GetSensitiveDataOccurrencesAvailabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSensitiveDataOccurrencesAvailabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSensitiveDataOccurrencesAvailabilityResponse)
    Q_DISABLE_COPY(GetSensitiveDataOccurrencesAvailabilityResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif

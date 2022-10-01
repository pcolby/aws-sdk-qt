// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYREQUEST_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesAvailabilityRequestPrivate;

class QTAWSMACIE2_EXPORT GetSensitiveDataOccurrencesAvailabilityRequest : public Macie2Request {

public:
    GetSensitiveDataOccurrencesAvailabilityRequest(const GetSensitiveDataOccurrencesAvailabilityRequest &other);
    GetSensitiveDataOccurrencesAvailabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSensitiveDataOccurrencesAvailabilityRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

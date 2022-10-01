// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESREQUEST_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesRequestPrivate;

class QTAWSMACIE2_EXPORT GetSensitiveDataOccurrencesRequest : public Macie2Request {

public:
    GetSensitiveDataOccurrencesRequest(const GetSensitiveDataOccurrencesRequest &other);
    GetSensitiveDataOccurrencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSensitiveDataOccurrencesRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

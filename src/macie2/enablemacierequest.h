// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMACIEREQUEST_H
#define QTAWS_ENABLEMACIEREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class EnableMacieRequestPrivate;

class QTAWSMACIE2_EXPORT EnableMacieRequest : public Macie2Request {

public:
    EnableMacieRequest(const EnableMacieRequest &other);
    EnableMacieRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableMacieRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

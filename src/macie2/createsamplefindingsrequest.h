// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLEFINDINGSREQUEST_H
#define QTAWS_CREATESAMPLEFINDINGSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class CreateSampleFindingsRequestPrivate;

class QTAWSMACIE2_EXPORT CreateSampleFindingsRequest : public Macie2Request {

public:
    CreateSampleFindingsRequest(const CreateSampleFindingsRequest &other);
    CreateSampleFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSampleFindingsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

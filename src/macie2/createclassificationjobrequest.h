// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLASSIFICATIONJOBREQUEST_H
#define QTAWS_CREATECLASSIFICATIONJOBREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class CreateClassificationJobRequestPrivate;

class QTAWSMACIE2_EXPORT CreateClassificationJobRequest : public Macie2Request {

public:
    CreateClassificationJobRequest(const CreateClassificationJobRequest &other);
    CreateClassificationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClassificationJobRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

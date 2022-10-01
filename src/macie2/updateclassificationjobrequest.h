// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFICATIONJOBREQUEST_H
#define QTAWS_UPDATECLASSIFICATIONJOBREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class UpdateClassificationJobRequestPrivate;

class QTAWSMACIE2_EXPORT UpdateClassificationJobRequest : public Macie2Request {

public:
    UpdateClassificationJobRequest(const UpdateClassificationJobRequest &other);
    UpdateClassificationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClassificationJobRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

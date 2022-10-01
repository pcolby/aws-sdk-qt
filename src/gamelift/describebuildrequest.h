// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUILDREQUEST_H
#define QTAWS_DESCRIBEBUILDREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeBuildRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeBuildRequest : public GameLiftRequest {

public:
    DescribeBuildRequest(const DescribeBuildRequest &other);
    DescribeBuildRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif

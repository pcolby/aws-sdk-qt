// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUILDRESPONSE_H
#define QTAWS_DESCRIBEBUILDRESPONSE_H

#include "gameliftresponse.h"
#include "describebuildrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeBuildResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeBuildResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeBuildResponse(const DescribeBuildRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBuildRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBuildResponse)
    Q_DISABLE_COPY(DescribeBuildResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif

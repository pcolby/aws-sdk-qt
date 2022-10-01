// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMQUERYRESPONSE_P_H
#define QTAWS_TIMESTREAMQUERYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class TimestreamQueryResponse;

class TimestreamQueryResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit TimestreamQueryResponsePrivate(TimestreamQueryResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TimestreamQueryResponse)
    Q_DISABLE_COPY(TimestreamQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif

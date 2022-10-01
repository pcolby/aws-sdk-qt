// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCETREERESPONSE_P_H
#define QTAWS_DELETERESOURCETREERESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteResourceTreeResponse;

class DeleteResourceTreeResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteResourceTreeResponsePrivate(DeleteResourceTreeResponse * const q);

    void parseDeleteResourceTreeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceTreeResponse)
    Q_DISABLE_COPY(DeleteResourceTreeResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif

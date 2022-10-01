// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABREWRESPONSE_P_H
#define QTAWS_DATABREWRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DataBrewResponse;

class DataBrewResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DataBrewResponsePrivate(DataBrewResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DataBrewResponse)
    Q_DISABLE_COPY(DataBrewResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif

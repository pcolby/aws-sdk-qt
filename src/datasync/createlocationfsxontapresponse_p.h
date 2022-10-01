// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXONTAPRESPONSE_P_H
#define QTAWS_CREATELOCATIONFSXONTAPRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOntapResponse;

class CreateLocationFsxOntapResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationFsxOntapResponsePrivate(CreateLocationFsxOntapResponse * const q);

    void parseCreateLocationFsxOntapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxOntapResponse)
    Q_DISABLE_COPY(CreateLocationFsxOntapResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOCDBRESPONSE_P_H
#define QTAWS_DOCDBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DocDb {

class DocDbResponse;

class DocDbResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DocDbResponsePrivate(DocDbResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DocDbResponse)
    Q_DISABLE_COPY(DocDbResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
